/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@protocol GEOMapItem;
@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface _GEOPlaceRequestTicket : GEOAbstractMapServiceTicket {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;
	id<GEOMapItem> _mapItemToRefine;

}
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(id)resultSectionHeader;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3 ;
-(void)_processRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(/*^block*/id)arg4 refinedHandler:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 ;
-(id)description;
-(void)cancel;
@end

