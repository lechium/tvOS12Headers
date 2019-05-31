/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionPlaySound : SCNAction {

	SCNCPlaySound* _mycaction;

}
+(id)playAudioSource:(id)arg1 waitForCompletion:(BOOL)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)reversedAction;
-(void)_setupDuration;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)parameters;
@end
