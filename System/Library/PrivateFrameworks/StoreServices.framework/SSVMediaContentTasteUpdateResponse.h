/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate, NSString;

@interface SSVMediaContentTasteUpdateResponse : NSObject <SSXPCCoding, NSSecureCoding> {

	BOOL _cachedResponse;
	NSArray* _contentTasteItems;
	NSDate* _expirationDate;
	unsigned long long _responseRevisionID;

}

@property (nonatomic,copy) NSArray * contentTasteItems;                                //@synthesize contentTasteItems=_contentTasteItems - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long responseRevisionID;                    //@synthesize responseRevisionID=_responseRevisionID - In the implementation block
@property (assign,getter=isCachedResponse,nonatomic) BOOL cachedResponse;              //@synthesize cachedResponse=_cachedResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(unsigned long long)responseRevisionID;
-(NSArray *)contentTasteItems;
-(void)setCachedResponse:(BOOL)arg1 ;
-(void)setContentTasteItems:(NSArray *)arg1 ;
-(void)setResponseRevisionID:(unsigned long long)arg1 ;
-(BOOL)isCachedResponse;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
@end

