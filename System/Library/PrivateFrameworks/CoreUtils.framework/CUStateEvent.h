/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface CUStateEvent : NSObject {

	NSString* _name;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)exitState;
+(id)initialTransition;
+(id)enterState;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(NSString *)name;
-(id)description;
@end
