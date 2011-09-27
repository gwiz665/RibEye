//
//  RibEyeAppDelegate.h
//  RibEye
//
//  Created by Nicki Hansen on 27/09/11.
//  Copyright 2011 Kiloo Games. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RibEyeViewController;
//lol villars sucks balls!

@interface RibEyeAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet RibEyeViewController *viewController;

@end
