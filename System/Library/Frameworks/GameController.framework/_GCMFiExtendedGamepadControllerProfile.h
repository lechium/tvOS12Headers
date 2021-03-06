/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/_GCExtendedGamepad.h>
#import <libobjc.A.dylib/_GCACHomeButtonDelegate.h>

@class _GCACHomeButton, GCMotion, NSString;

@interface _GCMFiExtendedGamepadControllerProfile : _GCExtendedGamepad <_GCACHomeButtonDelegate> {

	_GCACHomeButton* _acHome;
	GCMotion* _motion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlayerIndex:(long long)arg1 ;
-(id)motion;
-(id)initWithController:(id)arg1 ;
-(id)menuButton;
-(void)set_motion:(id)arg1 ;
-(void)toggleSuspendResume;
-(id)initWithCoder:(id)arg1 ;
-(id)name;
@end

