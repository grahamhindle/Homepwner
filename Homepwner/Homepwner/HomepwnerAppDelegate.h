//
//  HomepwnerAppDelegate.h
//  Homepwner
//
//  Created by Graham Hindle on 21/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ItemsViewController;

@interface HomepwnerAppDelegate : NSObject <UIApplicationDelegate> 
{
    ItemsViewController * itemsViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end
