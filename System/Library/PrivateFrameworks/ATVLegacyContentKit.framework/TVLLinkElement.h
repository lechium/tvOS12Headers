/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString;

@interface TVLLinkElement : TVLElement {

	NSString* _url;

}

@property (nonatomic,copy) NSString * url;              //@synthesize url=_url - In the implementation block
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
@end
