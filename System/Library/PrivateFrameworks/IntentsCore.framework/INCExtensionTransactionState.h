/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class INIntent, INIntentResponse, NSSet;

@interface INCExtensionTransactionState : NSObject {

	long long _type;
	INIntent* _intent;
	INIntentResponse* _intentResponse;
	NSSet* _userActivities;

}

@property (nonatomic,readonly) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) INIntent * intent;                              //@synthesize intent=_intent - In the implementation block
@property (nonatomic,copy,readonly) INIntentResponse * intentResponse;              //@synthesize intentResponse=_intentResponse - In the implementation block
@property (nonatomic,copy,readonly) NSSet * userActivities;                         //@synthesize userActivities=_userActivities - In the implementation block
-(NSSet *)userActivities;
-(id)initWithType:(long long)arg1 intent:(id)arg2 intentResponse:(id)arg3 userActivities:(id)arg4 ;
-(id)description;
-(long long)type;
-(INIntentResponse *)intentResponse;
-(INIntent *)intent;
@end

