/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface _TVSWiFiNetworkAssociationContext : NSObject {

	NSError* _error;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completion;                  //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

