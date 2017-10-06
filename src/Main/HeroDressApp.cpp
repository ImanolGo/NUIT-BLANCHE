/*
 *  HeroDressApp.cpp
 *  Hero Dress 
 *
 *  Created by Imanol Gomez on 09/09/16.
 *
 */

#include "AppManager.h"

#include "HeroDressApp.h"

//--------------------------------------------------------------
void HeroDressApp::setup(){
    AppManager::getInstance().setup();
}

//--------------------------------------------------------------
void HeroDressApp::update(){
    AppManager::getInstance().update();
}

//--------------------------------------------------------------
void HeroDressApp::draw(){
    AppManager::getInstance().draw();
}

void HeroDressApp::exit()
{
    ofLogNotice() <<"HeroDressApp::exit";

}

//--------------------------------------------------------------
void HeroDressApp::keyPressed(int key){

}

//--------------------------------------------------------------
void HeroDressApp::keyReleased(int key){

}

//--------------------------------------------------------------
void HeroDressApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void HeroDressApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void HeroDressApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void HeroDressApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void HeroDressApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void HeroDressApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void HeroDressApp::dragEvent(ofDragInfo dragInfo){

}
