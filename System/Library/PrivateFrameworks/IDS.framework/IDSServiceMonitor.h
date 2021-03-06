/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSServiceMonitor : NSObject {

	long long _availability;
	NSString* _service;
	int _token;

}

@property (nonatomic,readonly) NSString * service; 
-(NSString *)service;
-(long long)serviceAvailability;
-(void)updateAvailability;
-(void)_updateAvailability;
-(void)_postAvailability:(long long)arg1 ;
-(id)initWithService:(id)arg1 ;
-(void)dealloc;
@end

