/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVApplicationProxyLifetimeCacheKey : NSObject <NSCopying> {

	NSString* _applicationIdentifier;
	NSString* _bundlePathHash;
	double _lastModifiedDate;

}

@property (nonatomic,copy,readonly) NSString * bundlePathHash;                     //@synthesize bundlePathHash=_bundlePathHash - In the implementation block
@property (nonatomic,readonly) double lastModifiedDate;                            //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * filesystemSafeKeyName; 
+(id)cacheKeyForProxy:(id)arg1 ;
-(double)lastModifiedDate;
-(NSString *)bundlePathHash;
-(NSString *)filesystemSafeKeyName;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(NSString *)applicationIdentifier;
@end

