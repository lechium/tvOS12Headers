/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _TVScreenSaverRequest : NSObject {

	/*^block*/id _responseBlock;
	NSDictionary* _options;

}

@property (nonatomic,copy) id responseBlock;                      //@synthesize responseBlock=_responseBlock - In the implementation block
@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(void)setResponseBlock:(id)arg1 ;
-(id)responseBlock;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
@end

