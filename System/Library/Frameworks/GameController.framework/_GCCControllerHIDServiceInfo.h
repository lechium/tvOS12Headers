/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSData;

@interface _GCCControllerHIDServiceInfo : NSObject {

	IOHIDServiceClientRef _service;
	NSData* _inputData;

}

@property (nonatomic,readonly) IOHIDServiceClientRef service; 
@property (nonatomic,retain) NSData * inputData;                           //@synthesize inputData=_inputData - In the implementation block
-(id)registryID;
-(IOHIDServiceClientRef)service;
-(NSData *)inputData;
-(void)setInputData:(NSData *)arg1 ;
-(id)initWithService:(IOHIDServiceClientRef)arg1 ;
-(void)dealloc;
@end
