/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapServiceCategoriesTicket.h>

@protocol GEOMapServiceCategoriesTicket;
@class GEOMapServiceTraits, NSString;

@interface _MKCategoriesTicket : NSObject <MKMapServiceCategoriesTicket> {

	id<GEOMapServiceCategoriesTicket> _ticket;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(id)initWithTicket:(id)arg1 ;
-(void)cancel;
-(GEOMapServiceTraits *)traits;
@end

