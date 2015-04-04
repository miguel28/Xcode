//
//  Tutorial_1AppDelegate.h
//  Tutorial 1
//
//  Created by mike on 8/4/11.
//  Copyright 2011 MiGuEl Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Tutorial_1ViewController;

@interface Tutorial_1AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Tutorial_1ViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Tutorial_1ViewController *viewController;

@end

