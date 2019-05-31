/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface CalDAVCalendarUserAddress : NSObject {

	NSURL* _address;
	long long _preferred;

}

@property (nonatomic,retain) NSURL * address;              //@synthesize address=_address - In the implementation block
@property (assign) long long preferred;                    //@synthesize preferred=_preferred - In the implementation block
+(long long)defaultPreferredAttribute;
+(id)preferredAddress:(id)arg1 ;
+(id)_minPreferredAddress:(id)arg1 ;
+(id)_preferredAddressNoPreferred:(id)arg1 ;
+(id)packCalDAVUserAdress:(id)arg1 ;
+(id)unpackCalDAVUserAdress:(id)arg1 ;
-(void)setAddress:(NSURL *)arg1 ;
-(NSURL *)address;
-(void)setPreferred:(long long)arg1 ;
-(id)initWithAddress:(id)arg1 preferred:(long long)arg2 ;
-(long long)preferred;
-(long long)compare:(id)arg1 ;
@end

