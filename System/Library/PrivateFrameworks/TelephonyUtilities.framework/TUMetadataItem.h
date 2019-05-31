/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TUMetadataItem : NSObject {

	NSMutableDictionary* _callMetadata;

}

@property (nonatomic,readonly) NSMutableDictionary * callMetadata;              //@synthesize callMetadata=_callMetadata - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)metadataForProvider:(Class)arg1 ;
-(void)setMetadata:(id)arg1 forProvider:(Class)arg2 ;
-(NSMutableDictionary *)callMetadata;
-(id)init;
-(id)description;
-(BOOL)isEmpty;
@end
