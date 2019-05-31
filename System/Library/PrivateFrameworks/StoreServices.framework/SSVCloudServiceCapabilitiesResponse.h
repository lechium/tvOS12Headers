/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSVSubscriptionStatus, NSString;

@interface SSVCloudServiceCapabilitiesResponse : NSObject <SSXPCCoding, NSCopying> {

	BOOL _supportsMusicCatalogPlayback;
	BOOL _supportsAddToCloudMusicLibrary;
	BOOL _canSubscribeToMusicCatalog;
	SSVSubscriptionStatus* _subscriptionStatus;

}

@property (nonatomic,copy) SSVSubscriptionStatus * subscriptionStatus;              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (assign,nonatomic) BOOL supportsMusicCatalogPlayback;                     //@synthesize supportsMusicCatalogPlayback=_supportsMusicCatalogPlayback - In the implementation block
@property (assign,nonatomic) BOOL supportsAddToCloudMusicLibrary;                   //@synthesize supportsAddToCloudMusicLibrary=_supportsAddToCloudMusicLibrary - In the implementation block
@property (assign,nonatomic) BOOL canSubscribeToMusicCatalog;                       //@synthesize canSubscribeToMusicCatalog=_canSubscribeToMusicCatalog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)_descriptionWithSubscriptionStatusDescriptorBlock:(/*^block*/id)arg1 ;
-(void)setSubscriptionStatus:(SSVSubscriptionStatus *)arg1 ;
-(BOOL)supportsMusicCatalogPlayback;
-(void)setSupportsMusicCatalogPlayback:(BOOL)arg1 ;
-(BOOL)supportsAddToCloudMusicLibrary;
-(void)setSupportsAddToCloudMusicLibrary:(BOOL)arg1 ;
-(BOOL)canSubscribeToMusicCatalog;
-(void)setCanSubscribeToMusicCatalog:(BOOL)arg1 ;
-(SSVSubscriptionStatus *)subscriptionStatus;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
