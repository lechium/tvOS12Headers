/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NSData;

@interface NEAppInfo : NSObject <NSSecureCoding, NSCopying> {

	int _pid;
	NSUUID* _uuid;
	NSString* _bundleID;
	NSString* _appVersion;
	NSData* _cdHash;

}

@property (assign,nonatomic) int pid;                          //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * appVersion;              //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,copy) NSData * cdHash;                    //@synthesize cdHash=_cdHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setPid:(int)arg1 ;
-(NSData *)cdHash;
-(void)setCdHash:(NSData *)arg1 ;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)appVersion;
-(int)pid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isComplete;
-(NSString *)bundleID;
@end

