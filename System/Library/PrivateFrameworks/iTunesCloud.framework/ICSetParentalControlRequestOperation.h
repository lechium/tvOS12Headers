/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest;

@interface ICSetParentalControlRequestOperation : ICRequestOperation {

	BOOL _allowsExplicitContent;
	BOOL _automatic;
	ICStoreRequestContext* _requestContext;
	ICStoreURLRequest* _storeURLRequest;

}

@property (assign,nonatomic) BOOL allowsExplicitContent;                          //@synthesize allowsExplicitContent=_allowsExplicitContent - In the implementation block
@property (assign,getter=isAutomatic,nonatomic) BOOL automatic;                   //@synthesize automatic=_automatic - In the implementation block
@property (nonatomic,retain) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,retain) ICStoreURLRequest * storeURLRequest;                 //@synthesize storeURLRequest=_storeURLRequest - In the implementation block
-(void)_getURLFromBagAndSendRequest;
-(void)_buildAndSendRequestForURL:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 allowsExplicitContent:(BOOL)arg2 isAutomatic:(BOOL)arg3 ;
-(void)setAutomatic:(BOOL)arg1 ;
-(ICStoreURLRequest *)storeURLRequest;
-(void)setStoreURLRequest:(ICStoreURLRequest *)arg1 ;
-(BOOL)allowsExplicitContent;
-(void)execute;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(void)setAllowsExplicitContent:(BOOL)arg1 ;
-(void)cancel;
-(BOOL)isAutomatic;
@end

