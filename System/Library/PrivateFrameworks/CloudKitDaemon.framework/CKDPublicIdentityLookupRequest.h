/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDCacheBasedRequest.h>

@class NSArray, NSMutableArray, CKDDiscoverUserIdentitiesURLRequest;

@interface CKDPublicIdentityLookupRequest : CKDCacheBasedRequest {

	/*^block*/id _perLookupInfoProgressBlock;
	/*^block*/id _lookupCompletionBlock;
	NSArray* _originalLookupInfosToFetch;
	NSMutableArray* _lookupInfosToFetch;
	CKDDiscoverUserIdentitiesURLRequest* _request;

}

@property (nonatomic,retain) NSArray * originalLookupInfosToFetch;                       //@synthesize originalLookupInfosToFetch=_originalLookupInfosToFetch - In the implementation block
@property (nonatomic,retain) NSMutableArray * lookupInfosToFetch;                        //@synthesize lookupInfosToFetch=_lookupInfosToFetch - In the implementation block
@property (nonatomic,retain) CKDDiscoverUserIdentitiesURLRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id perLookupInfoProgressBlock;                                //@synthesize perLookupInfoProgressBlock=_perLookupInfoProgressBlock - In the implementation block
@property (nonatomic,copy) id lookupCompletionBlock;                                     //@synthesize lookupCompletionBlock=_lookupCompletionBlock - In the implementation block
+(void)removeCacheForLookupInfos:(id)arg1 inCache:(id)arg2 ;
-(void)setRequest:(CKDDiscoverUserIdentitiesURLRequest *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)performRequest;
-(id)ckShortDescription;
-(id)initWithLookupInfos:(id)arg1 ;
-(void)setPerLookupInfoProgressBlock:(id)arg1 ;
-(void)setLookupCompletionBlock:(id)arg1 ;
-(void)_receivedUserIdentity:(id)arg1 forLookupInfo:(id)arg2 error:(id)arg3 ;
-(NSMutableArray *)lookupInfosToFetch;
-(BOOL)_tryComplete;
-(id)spawnURLRequests;
-(id)_generateOONPrivateKeyWithError:(id*)arg1 ;
-(void)_saveUserIdentity:(id)arg1 forLookupInfo:(id)arg2 ;
-(NSArray *)originalLookupInfosToFetch;
-(id)perLookupInfoProgressBlock;
-(id)lookupCompletionBlock;
-(void)setOriginalLookupInfosToFetch:(NSArray *)arg1 ;
-(void)setLookupInfosToFetch:(NSMutableArray *)arg1 ;
-(id)description;
-(CKDDiscoverUserIdentitiesURLRequest *)request;
@end

