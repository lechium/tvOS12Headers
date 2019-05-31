/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject <NSSecureCoding> {

	NSMutableDictionary* _anchorToVersion;
	NSMutableDictionary* _versionToAnchor;
	long long _currentFeatureVersion;

}

@property (nonatomic,readonly) long long currentFeatureVersion;              //@synthesize currentFeatureVersion=_currentFeatureVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)currentFeatureVersion;
-(void)enumerateHistoryWithBlock:(/*^block*/id)arg1 ;
-(id)initWithCurrentFeatureVersion:(long long)arg1 ;
-(void)addSyncAnchor:(NSData*)arg1 forFeatureVersion:(long long)arg2 ;
-(NSData*)syncAnchorForFeatureVersion:(long long)arg1 ;
-(long long)featureVersionForSyncAnchor:(NSData*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
