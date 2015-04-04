//
//  FrissbeePhoneViewController.m
//  FrissbeePhone
//
//  Created by mike on 8/5/11.
//  Copyright 2011 MiGuEl Inc. All rights reserved.
//

#import "FrissbeePhoneViewController.h"

@implementation FrissbeePhoneViewController


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (void)viewDidLoad {
	[super viewDidLoad];
	pos= CGPointMake(25.0,19.0);
}

- (void)viewDidUnload {
	UIAlertView *exit = [[UIAlertView alloc] initWithTitle:@"Saliendo" message:[NSString stringWithFormat:@"Gracias Por Jugar"] delegate:nil cancelButtonTitle:@"Aceptar" otherButtonTitles:nil];
	[exit show];
	[exit release];
	
}

-(IBAction)start{
	[StartButton setHidden:YES];
	randomMain = [NSTimer scheduledTimerWithTimeInterval:(0.03) target:self selector:@selector(onTimer) userInfo:nil repeats:YES];
}

-(void)onTimer{
	tiempo++;
	[self checkCollision];
	enemy.center = CGPointMake(enemy.center.x+pos.x, enemy.center.y+pos.y);
	if(enemy.center.x > 320 || enemy.center.x < 0 )
		pos.x =-pos.x;
	if(enemy.center.y > 480 || enemy.center.y < 0 )
		pos.y =-pos.y;				 
}
					 
-(void)checkCollision{
	if(CGRectIntersectsRect(player.frame, enemy.frame)){
		[randomMain invalidate];
		[StartButton setHidden:NO];
		
		CGRect frame=[player frame];
		frame.origin.x=137.0f;
		frame.origin.y=326.0;
		[player setFrame:frame];
		
		CGRect frame2=[enemy frame];
		frame2.origin.x=137.0f;
		frame2.origin.y=20.0;
		[enemy setFrame:frame2];
		
		UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Perdiste!!!" message:[NSString stringWithFormat:@"A como estas pendejo no mas aguantaste %d ",tiempo] delegate:nil cancelButtonTitle:@"Aceptar" otherButtonTitles:nil];
		[alert show];
		[alert release];
	}
		
}
-(void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event{
	UITouch *myTouch = [[event allTouches] anyObject];
	player.center = [myTouch locationInView:self.view];
}
					 
					 
- (void)dealloc {
    [super dealloc];
}

@end
