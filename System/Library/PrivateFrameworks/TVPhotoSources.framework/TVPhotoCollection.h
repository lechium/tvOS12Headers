/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotoSources/TVPhotoSources-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TVPhotoSource, NSDictionary;

@interface TVPhotoCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _collectionIdentifier;
	NSString* _collectionName;
	NSString* _remoteURL;
	BOOL _hasExternalURLs;
	TVPhotoSource* _photoSource;

}

@property (nonatomic,readonly) NSDictionary * providerInfo; 
@property (nonatomic,retain) TVPhotoSource * photoSource;                         //@synthesize photoSource=_photoSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteURL;                         //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * collectionName;                    //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * collectionIdentifier;              //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalURLs;                              //@synthesize hasExternalURLs=_hasExternalURLs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)remoteURL;
-(NSString *)collectionName;
-(NSString *)collectionIdentifier;
-(NSDictionary *)providerInfo;
-(BOOL)hasExternalURLs;
-(TVPhotoSource *)photoSource;
-(void)setPhotoSource:(TVPhotoSource *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

