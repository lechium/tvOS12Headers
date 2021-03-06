/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CATState;

@interface CATTransition : NSObject {

	CATState* _state;
	SEL _action;

}

@property (nonatomic,__weak,readonly) CATState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SEL action;                           //@synthesize action=_action - In the implementation block
+(id)new;
-(id)initWithState:(id)arg1 action:(SEL)arg2 ;
-(id)init;
-(id)description;
-(CATState *)state;
-(SEL)action;
@end

