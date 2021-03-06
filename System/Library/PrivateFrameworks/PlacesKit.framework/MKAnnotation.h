/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MKAnnotation <NSObject>
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(void)setCoordinate:(CLLocationCoordinate2D)arg1;
-(NSString *)title;
-(NSString *)subtitle;

@required
-(CLLocationCoordinate2D)coordinate;

@end

