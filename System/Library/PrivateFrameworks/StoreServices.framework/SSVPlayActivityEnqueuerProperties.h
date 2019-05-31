/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSTimeZone;

@interface SSVPlayActivityEnqueuerProperties : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _buildVersion;
	NSString* _deviceGUID;
	NSString* _deviceName;
	NSNumber* _privateListeningEnabled;
	BOOL _SBEnabled;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;
	long long _systemReleaseType;
	NSTimeZone* _timeZone;

}

@property (nonatomic,copy,readonly) NSString * buildVersion;                                                          //@synthesize buildVersion=_buildVersion - In the implementation block
@property (getter=isPrivateListeningEnabled,nonatomic,copy,readonly) NSNumber * privateListeningEnabled;              //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceGUID;                                                            //@synthesize deviceGUID=_deviceGUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceName;                                                            //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * timeZone;                                                            //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) long long systemReleaseType;                                                           //@synthesize systemReleaseType=_systemReleaseType - In the implementation block
@property (setter=BEnabled,getter=isSBEnabled,nonatomic,readonly) BOOL SBEnabled;                                     //@synthesize SBEnabled=_SBEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long storeAccountID;                                                     //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeFrontID;                                                          //@synthesize storeFrontID=_storeFrontID - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)systemReleaseType;
-(NSString *)storeFrontID;
-(BOOL)isSBEnabled;
-(id)_copyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(NSString *)deviceName;
-(unsigned long long)storeAccountID;
-(id)isPrivateListeningEnabled;
-(NSString *)deviceGUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSTimeZone *)timeZone;
-(NSString *)buildVersion;
@end

