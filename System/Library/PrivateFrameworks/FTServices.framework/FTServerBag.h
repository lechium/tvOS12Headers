/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface FTServerBag : NSObject {

	long long _type;

}

@property (readonly) NSURL * bagURL; 
@property (readonly) NSString * apsEnvironmentName; 
@property (readonly) BOOL allowSelfSignedCertificates; 
@property (readonly) BOOL allowUnsignedBags; 
@property (readonly) BOOL isLoaded; 
@property (readonly) BOOL isLoading; 
@property (readonly) BOOL isInDebilitatedMode; 
@property (readonly) BOOL isServerAvailable; 
+(id)_sharedInstanceForType:(long long)arg1 ;
+(id)sharedInstanceForBagType:(long long)arg1 ;
+(id)_sharedInstance;
+(id)sharedInstance;
-(NSString *)apsEnvironmentName;
-(id)_bag;
-(id)_cachedBag;
-(BOOL)isInDebilitatedMode;
-(void)forceBagLoad;
-(id)urlWithKey:(id)arg1 ;
-(NSURL *)bagURL;
-(BOOL)allowSelfSignedCertificates;
-(BOOL)allowUnsignedBags;
-(id)initWithBagType:(long long)arg1 ;
-(void)startBagLoad;
-(BOOL)isServerAvailable;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(BOOL)isLoaded;
-(BOOL)isLoading;
@end

