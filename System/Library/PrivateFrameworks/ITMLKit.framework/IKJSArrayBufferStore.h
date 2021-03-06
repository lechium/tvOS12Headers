/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, IKAppContext;

@interface IKJSArrayBufferStore : NSObject {

	NSMutableDictionary* _bufferStorage;
	IKAppContext* _appContext;

}

@property (nonatomic,readonly) NSMutableDictionary * bufferStorage;              //@synthesize bufferStorage=_bufferStorage - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                 //@synthesize appContext=_appContext - In the implementation block
-(NSMutableDictionary *)bufferStorage;
-(id)arrayBufferForData:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(IKAppContext *)appContext;
@end

