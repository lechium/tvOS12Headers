/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFTaskIdentifier, NSProgress;

@interface WFTask : NSObject {

	BOOL _requiresResponse;
	WFTaskIdentifier* _identifier;
	NSProgress* _progress;

}

@property (nonatomic,readonly) WFTaskIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL requiresResponse;                      //@synthesize requiresResponse=_requiresResponse - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                        //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled; 
+(id)sharedServiceConnection;
-(BOOL)requiresResponse;
-(void)handleResponse:(id)arg1 ;
-(id)initWithResponseRequired:(BOOL)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
-(void)executeSynchronously;
-(id)init;
-(WFTaskIdentifier *)identifier;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(void)cleanup;
-(NSProgress *)progress;
@end

