/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSSet, VSAuditToken, VSOptional, SSLookupRequest, NSOperationQueue;

@interface VSAppDescriptionFetchOperation : VSAsyncOperation {

	BOOL _needsProductProfile;
	BOOL _shouldPersonalizeResponse;
	BOOL _shouldPrecomposeIcon;
	NSSet* _appAdamIDs;
	VSAuditToken* _auditToken;
	VSOptional* _result;
	SSLookupRequest* _lookupRequest;
	NSOperationQueue* _imageLoadingQueue;
	CGSize _preferredArtworkSize;

}

@property (nonatomic,copy) NSSet * appAdamIDs;                                  //@synthesize appAdamIDs=_appAdamIDs - In the implementation block
@property (assign,nonatomic) CGSize preferredArtworkSize;                       //@synthesize preferredArtworkSize=_preferredArtworkSize - In the implementation block
@property (nonatomic,retain) VSOptional * result;                               //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) SSLookupRequest * lookupRequest;                   //@synthesize lookupRequest=_lookupRequest - In the implementation block
@property (nonatomic,retain) NSOperationQueue * imageLoadingQueue;              //@synthesize imageLoadingQueue=_imageLoadingQueue - In the implementation block
@property (assign,nonatomic) BOOL needsProductProfile;                          //@synthesize needsProductProfile=_needsProductProfile - In the implementation block
@property (assign,nonatomic) BOOL shouldPersonalizeResponse;                    //@synthesize shouldPersonalizeResponse=_shouldPersonalizeResponse - In the implementation block
@property (assign,nonatomic) BOOL shouldPrecomposeIcon;                         //@synthesize shouldPrecomposeIcon=_shouldPrecomposeIcon - In the implementation block
@property (nonatomic,retain) VSAuditToken * auditToken;                         //@synthesize auditToken=_auditToken - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(id)initWithAppAdamIDs:(id)arg1 preferredArtworkSize:(CGSize)arg2 ;
-(NSOperationQueue *)imageLoadingQueue;
-(NSSet *)appAdamIDs;
-(id)_appDescriptionFromLookupResponse:(id)arg1 appAdamID:(id)arg2 ;
-(CGSize)preferredArtworkSize;
-(BOOL)shouldPrecomposeIcon;
-(BOOL)needsProductProfile;
-(BOOL)shouldPersonalizeResponse;
-(void)_handleLookupResponse:(id)arg1 ;
-(id)initWithAppAdamIDs:(id)arg1 ;
-(void)setAppAdamIDs:(NSSet *)arg1 ;
-(void)setPreferredArtworkSize:(CGSize)arg1 ;
-(void)setNeedsProductProfile:(BOOL)arg1 ;
-(void)setShouldPersonalizeResponse:(BOOL)arg1 ;
-(void)setShouldPrecomposeIcon:(BOOL)arg1 ;
-(void)setImageLoadingQueue:(NSOperationQueue *)arg1 ;
-(void)executionDidBegin;
-(SSLookupRequest *)lookupRequest;
-(void)setLookupRequest:(SSLookupRequest *)arg1 ;
-(id)init;
-(void)cancel;
-(VSOptional *)result;
-(VSAuditToken *)auditToken;
@end

