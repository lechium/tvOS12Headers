/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ASDPurgeAppsResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {

	long long _purgedSize;
	NSArray* _purgedApps;

}

@property (nonatomic,readonly) long long purgedSize;              //@synthesize purgedSize=_purgedSize - In the implementation block
@property (nonatomic,readonly) NSArray * purgedApps;              //@synthesize purgedApps=_purgedApps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPurgedSize:(long long)arg1 purgedApps:(id)arg2 ;
-(NSArray *)purgedApps;
-(long long)purgedSize;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

