/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetResourceLoaderRequest.h>

@class AVAssetResourceLoadingRequestInternal, NSURLRequest, AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, NSURLResponse, AVAssetResourceLoadingRequestor, NSString;

@interface AVAssetResourceLoadingRequest : NSObject <AVAssetResourceLoaderRequest> {

	AVAssetResourceLoadingRequestInternal* _loadingRequest;

}

@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) AVAssetResourceLoadingContentInformationRequest * contentInformationRequest; 
@property (nonatomic,readonly) AVAssetResourceLoadingDataRequest * dataRequest; 
@property (nonatomic,copy) NSURLResponse * response; 
@property (nonatomic,copy) NSURLRequest * redirect; 
@property (nonatomic,readonly) AVAssetResourceLoadingRequestor * requestor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SEL)_selectorForInformingDelegateOfCancellationByFig;
-(void)finalize;
-(id)_weakReference;
-(id)_resourceLoader;
-(id)_requestDictionary;
-(unsigned long long)_requestID;
-(CFDictionaryRef)_requestInfo;
-(void)_performCancellationByClient;
-(BOOL)_shouldInformDelegateOfFigCancellation;
-(id)initWithResourceLoader:(id)arg1 requestDictionary:(id)arg2 ;
-(id)initWithResourceLoader:(id)arg1 requestInfo:(CFDictionaryRef)arg2 requestID:(unsigned long long)arg3 ;
-(OpaqueFigCustomURLHandlerRef)_customURLHandler;
-(OpaqueFigCustomURLLoaderRef)_customURLLoader;
-(OpaqueFigCustomURLHandlerRef)_contentKeySessionCustomURLHandler;
-(void)_sendDataToCustomURLHandler:(id)arg1 ;
-(void)_sendDataIncrementally:(id)arg1 data:(id)arg2 ;
-(void)_appendToCachedData:(id)arg1 ;
-(NSURLRequest *)redirect;
-(id)initWithResourceLoader:(id)arg1 URL:(id)arg2 httpRequestHeaders:(id)arg3 requestOffset:(id)arg4 requestLength:(id)arg5 allowedContentTypes:(id)arg6 figCryptor:(OpaqueFigCPECryptorRef)arg7 cryptorKeyRequestID:(unsigned long long)arg8 figPlaybackItem:(OpaqueFigPlaybackItemRef)arg9 figAssetImageGenerator:(OpaqueFigAssetImageGeneratorRef)arg10 ;
-(void)_setContentInformationRequest:(id)arg1 ;
-(void)_setDataRequest:(id)arg1 ;
-(BOOL)_tryToMarkAsCancelled;
-(BOOL)_isRequestForContentKey;
-(BOOL)_canSetOrUseCachedContentInformation;
-(void)_sendResponseInfoToCustomURLHandler;
-(void)_ensureResponseInfoSentToCustomURLHandler;
-(void)_cacheContentInformation:(id)arg1 ;
-(void)_sendFinishLoadingToCustomURLHandlerWithError:(id)arg1 ;
-(void)_sendDictionaryForURLRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)_contentKeySessionIsAttached;
-(void)forwardRequestToContentKeySession;
-(id)_getAndClearCachedData;
-(void)_sendFinishLoadingToCustomURLHandler;
-(void)setRedirect:(NSURLRequest *)arg1 ;
-(id)createKeyRequestDataUsingCryptorForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 performAsync:(BOOL)arg4 error:(id*)arg5 ;
-(id)serializableRepresentation;
-(void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3 ;
-(id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)persistentContentKeyFromKeyVendorResponse:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)finished;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(AVAssetResourceLoadingContentInformationRequest *)contentInformationRequest;
-(void)finishLoading;
-(void)finishLoadingWithError:(id)arg1 ;
-(AVAssetResourceLoadingDataRequest *)dataRequest;
-(AVAssetResourceLoadingRequestor *)requestor;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isCancelled;
-(NSURLRequest *)request;
-(NSURLResponse *)response;
-(BOOL)isFinished;
@end
