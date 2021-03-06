/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/_ML3DatabaseConnectionPoolDiagnostic.h>

@class NSArray;

@interface _ML3MutableDatabaseConnectionPoolDiagnostic : _ML3DatabaseConnectionPoolDiagnostic

@property (nonatomic,copy) NSArray * readerAvailableConnections; 
@property (nonatomic,copy) NSArray * readerBusyConnections; 
@property (nonatomic,copy) NSArray * writerAvailableConnections; 
@property (nonatomic,copy) NSArray * writerBusyConnections; 
-(void)setReaderAvailableConnections:(NSArray *)arg1 ;
-(void)setReaderBusyConnections:(NSArray *)arg1 ;
-(void)setWriterAvailableConnections:(NSArray *)arg1 ;
-(void)setWriterBusyConnections:(NSArray *)arg1 ;
@end

