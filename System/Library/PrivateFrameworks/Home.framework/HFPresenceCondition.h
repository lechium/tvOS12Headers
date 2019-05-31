/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFCondition.h>

@class HMPresenceEvent;

@interface HFPresenceCondition : HFCondition {

	HMPresenceEvent* _presenceEvent;

}

@property (nonatomic,retain) HMPresenceEvent * presenceEvent;              //@synthesize presenceEvent=_presenceEvent - In the implementation block
-(id)initWithPredicate:(id)arg1 ;
-(id)initWithPresenceEvent:(id)arg1 ;
-(void)setPresenceEvent:(HMPresenceEvent *)arg1 ;
-(HMPresenceEvent *)presenceEvent;
@end

