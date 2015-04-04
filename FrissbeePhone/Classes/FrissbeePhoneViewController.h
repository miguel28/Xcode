//
//  FrissbeePhoneViewController.h
//  FrissbeePhone
//
//  Created by mike on 8/5/11.
//  Copyright 2011 MiGuEl Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FrissbeePhoneViewController : UIViewController {
	IBOutlet UIButton *StartButton;
	NSTimer * randomMain;
	CGPoint pos;
	IBOutlet UIImageView *player;
	IBOutlet UIImageView *enemy;
}
int tiempo;
-(IBAction)start;
-(void)onTimer;

-(void)checkCollision;
-(void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event;

@end

