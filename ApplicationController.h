//
//  ApplicationController.h
//  Facebook
//
//  Copyright 2009 Facebook Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <FBCocoa/FBCocoa.h>
#import "BubbleManager.h"
#import "MenuManager.h"

@interface ApplicationController : NSObject {
  NSImage *silhouette;

  FBSession *fbSession;
  
  MenuManager *menu;

  NSMutableArray *notificationMenuItems;

  NSMutableDictionary *profilePics;

  BubbleManager *bubbleManager;
}

@end