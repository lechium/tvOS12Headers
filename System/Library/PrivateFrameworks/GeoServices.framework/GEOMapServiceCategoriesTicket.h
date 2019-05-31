/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOMapServiceTraits, NSDictionary;


@protocol GEOMapServiceCategoriesTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@required
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3;
-(void)cancel;
-(GEOMapServiceTraits *)traits;

@end

