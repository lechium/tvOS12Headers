/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CHPointFIFO : NSObject {

	CHPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) CHPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)dealloc;
-(void)clear;
-(void)setNextFIFO:(CHPointFIFO *)arg1 ;
-(CHPointFIFO *)nextFIFO;
-(void)addPoint:;
-(void)emitPoint:;
-(void)flush;
-(id)initWithFIFO:(id)arg1 ;
@end
