/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class GEOETATrafficUpdateResponse, NSString;

@interface GEOETAReplyUpdateable : GEOXPCReply <GEOXPCReply> {

	GEOETATrafficUpdateResponse* _response;

}

@property (nonatomic,retain) GEOETATrafficUpdateResponse * response;              //@synthesize response=_response - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setResponse:(GEOETATrafficUpdateResponse *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOETATrafficUpdateResponse *)response;
-(BOOL)isValid;
@end

