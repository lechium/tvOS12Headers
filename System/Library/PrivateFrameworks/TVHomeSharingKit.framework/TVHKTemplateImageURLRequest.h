/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVHKContributorImageLoadParams;

@interface TVHKTemplateImageURLRequest : NSObject {

	TVHKContributorImageLoadParams* _params;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) TVHKContributorImageLoadParams * params;              //@synthesize params=_params - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
-(TVHKContributorImageLoadParams *)params;
-(void)setParams:(TVHKContributorImageLoadParams *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end

