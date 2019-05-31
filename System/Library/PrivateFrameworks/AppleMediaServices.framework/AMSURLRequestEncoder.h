/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSRequestEncoding.h>

@protocol AMSURLBagContract, AMSResponseDecoding, OS_dispatch_queue;
@class ACAccount, NSDictionary, AMSProcessInfo, NSString, NSObject;

@interface AMSURLRequestEncoder : NSObject <AMSRequestEncoding> {

	BOOL _compressRequestBody;
	BOOL _includeClientVersions;
	BOOL _urlKnownToBeTrusted;
	BOOL _disableAccountMediaTypeComponent;
	ACAccount* _account;
	NSDictionary* _additionalMetrics;
	long long _anisetteType;
	id<AMSURLBagContract> _bagContract;
	AMSProcessInfo* _clientInfo;
	long long _dataEncoding;
	long long _dialogOptions;
	NSString* _logUUID;
	long long _mescalType;
	id<AMSResponseDecoding> _responseDecoder;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) BOOL disableAccountMediaTypeComponent;                   //@synthesize disableAccountMediaTypeComponent=_disableAccountMediaTypeComponent - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalMetrics;                        //@synthesize additionalMetrics=_additionalMetrics - In the implementation block
@property (assign,nonatomic) long long anisetteType;                                  //@synthesize anisetteType=_anisetteType - In the implementation block
@property (nonatomic,retain) id<AMSURLBagContract> bagContract;                       //@synthesize bagContract=_bagContract - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                             //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) BOOL compressRequestBody;                                //@synthesize compressRequestBody=_compressRequestBody - In the implementation block
@property (assign,nonatomic) long long dataEncoding;                                  //@synthesize dataEncoding=_dataEncoding - In the implementation block
@property (assign,nonatomic) long long dialogOptions;                                 //@synthesize dialogOptions=_dialogOptions - In the implementation block
@property (assign,nonatomic) BOOL includeClientVersions;                              //@synthesize includeClientVersions=_includeClientVersions - In the implementation block
@property (nonatomic,retain) NSString * logUUID;                                      //@synthesize logUUID=_logUUID - In the implementation block
@property (assign,nonatomic) long long mescalType;                                    //@synthesize mescalType=_mescalType - In the implementation block
@property (nonatomic,retain) id<AMSResponseDecoding> responseDecoder;                 //@synthesize responseDecoder=_responseDecoder - In the implementation block
@property (assign,nonatomic) BOOL urlKnownToBeTrusted;                                //@synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)dataEncoding;
-(AMSProcessInfo *)clientInfo;
-(NSString *)logUUID;
-(NSDictionary *)additionalMetrics;
-(void)setAdditionalMetrics:(NSDictionary *)arg1 ;
-(void)setUrlKnownToBeTrusted:(BOOL)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)_methodStringFromMethod:(long long)arg1 ;
-(id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 ;
-(void)setLogUUID:(NSString *)arg1 ;
-(BOOL)compressRequestBody;
-(long long)anisetteType;
-(void)setAnisetteType:(long long)arg1 ;
-(id<AMSURLBagContract>)bagContract;
-(void)setBagContract:(id<AMSURLBagContract>)arg1 ;
-(long long)dialogOptions;
-(void)setDialogOptions:(long long)arg1 ;
-(BOOL)urlKnownToBeTrusted;
-(long long)mescalType;
-(void)setMescalType:(long long)arg1 ;
-(id<AMSResponseDecoding>)responseDecoder;
-(void)setResponseDecoder:(id<AMSResponseDecoding>)arg1 ;
-(BOOL)includeClientVersions;
-(BOOL)disableAccountMediaTypeComponent;
-(id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
-(id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 error:(id*)arg3 ;
-(id)requestWithMethod:(long long)arg1 URL:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
-(id)requestWithMethod:(long long)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id*)arg4 ;
-(id)initWithBagContract:(id)arg1 ;
-(id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 parameters:(id)arg3 ;
-(id)requestWithMethod:(long long)arg1 URL:(id)arg2 parameters:(id)arg3 ;
-(id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 error:(id*)arg3 ;
-(id)requestWithMethod:(long long)arg1 URL:(id)arg2 error:(id*)arg3 ;
-(id)requestWithMethod:(long long)arg1 URLString:(id)arg2 error:(id*)arg3 ;
-(void)setCompressRequestBody:(BOOL)arg1 ;
-(void)setDataEncoding:(long long)arg1 ;
-(void)setIncludeClientVersions:(BOOL)arg1 ;
-(void)setDisableAccountMediaTypeComponent:(BOOL)arg1 ;
-(id)init;
@end

