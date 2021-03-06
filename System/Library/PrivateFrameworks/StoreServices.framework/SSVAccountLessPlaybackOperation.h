/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSString, NSMutableDictionary, NSDictionary;

@interface SSVAccountLessPlaybackOperation : SSVComplexOperation {

	NSString* _assetStoreFrontIdentifier;
	NSMutableDictionary* _httpHeaderFields;
	NSString* _itemIdentifier;
	/*^block*/id _responseBlock;

}

@property (nonatomic,copy) NSDictionary * HTTPHeaderFields;                   //@synthesize httpHeaderFields=_httpHeaderFields - In the implementation block
@property (nonatomic,copy) NSString * assetStoreFrontIdentifier; 
@property (copy) NSString * itemIdentifier; 
@property (copy) id responseBlock; 
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setHTTPHeaderFields:(NSDictionary *)arg1 ;
-(NSDictionary *)HTTPHeaderFields;
-(id)_requestBodyData;
-(NSString *)assetStoreFrontIdentifier;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)setResponseBlock:(id)arg1 ;
-(void)setAssetStoreFrontIdentifier:(NSString *)arg1 ;
-(id)responseBlock;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(void)main;
@end

