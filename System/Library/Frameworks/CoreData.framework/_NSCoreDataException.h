/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSException.h>

@class NSString;

@interface _NSCoreDataException : NSException {

	long long _code;
	NSString* _domain;

}
+(id)exceptionWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4 ;
-(id)initWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4 ;
-(void)_setDomain:(id)arg1 ;
-(id)errorObjectWithUserInfo:(id)arg1 ;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
-(void)dealloc;
-(id)domain;
-(long long)code;
@end

