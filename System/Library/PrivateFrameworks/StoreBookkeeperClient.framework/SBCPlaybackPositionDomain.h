/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeperClient/StoreBookkeeperClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SBCPlaybackPositionDomain : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsSyncProtocol;
	NSString* _domainIdentifier;
	NSString* _ubiquitousDatabasePath;
	NSString* _foreignDatabasePath;

}

@property (nonatomic,retain) NSString * ubiquitousDatabasePath;              //@synthesize ubiquitousDatabasePath=_ubiquitousDatabasePath - In the implementation block
@property (assign,nonatomic) BOOL supportsSyncProtocol;                      //@synthesize supportsSyncProtocol=_supportsSyncProtocol - In the implementation block
@property (nonatomic,readonly) NSString * domainIdentifier;                  //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * foreignDatabasePath;               //@synthesize foreignDatabasePath=_foreignDatabasePath - In the implementation block
+(id)domainForSyncingMusicLibraryWithLibraryPath:(id)arg1 ;
+(id)allSyncingDomains;
+(id)domainForExtrasValues;
+(BOOL)supportsSecureCoding;
-(NSString *)domainIdentifier;
-(BOOL)supportsSyncProtocol;
-(id)initWithDomainIdentifier:(id)arg1 foreignDatabasePath:(id)arg2 ;
-(void)setSupportsSyncProtocol:(BOOL)arg1 ;
-(void)setUbiquitousDatabasePath:(NSString *)arg1 ;
-(NSString *)ubiquitousDatabasePath;
-(NSString *)foreignDatabasePath;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

