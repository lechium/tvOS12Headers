/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SKProductsResponse : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSArray * products; 
@property (nonatomic,readonly) NSArray * invalidProductIdentifiers; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)_setInvalidIdentifiers:(id)arg1 ;
-(void)_setProducts:(id)arg1 ;
-(NSArray *)products;
-(NSArray *)invalidProductIdentifiers;
-(id)init;
@end

