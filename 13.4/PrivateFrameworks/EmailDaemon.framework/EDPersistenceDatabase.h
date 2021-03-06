//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDPersistenceDatabaseConnectionDelegate-Protocol.h>
#import <EmailDaemon/EDPersistenceDatabaseConnectionPoolDelegate-Protocol.h>

@class EDPersistenceDatabaseConnectionPool, EDProtectedDatabasePersistence, EFSQLPropertyMapper, EFSQLSchema, NSString;

@interface EDPersistenceDatabase : NSObject <EDPersistenceDatabaseConnectionPoolDelegate, EDPersistenceDatabaseConnectionDelegate>
{
    _Bool _setupIsComplete;
    EFSQLSchema *_schema;
    EFSQLSchema *_protectedSchema;
    EFSQLPropertyMapper *_propertyMapper;
    EDPersistenceDatabaseConnectionPool *_connectionPool;
    EDProtectedDatabasePersistence *_protectedDatabasePersistence;
    NSString *_basePath;
    NSString *_databaseName;
    NSString *_fullPath;
}

+ (id)log;
- (void).cxx_destruct;
@property _Bool setupIsComplete; // @synthesize setupIsComplete=_setupIsComplete;
@property(readonly, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(readonly, nonatomic) NSString *databaseName; // @synthesize databaseName=_databaseName;
@property(readonly, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(readonly, nonatomic) EDProtectedDatabasePersistence *protectedDatabasePersistence; // @synthesize protectedDatabasePersistence=_protectedDatabasePersistence;
@property(readonly, nonatomic) EDPersistenceDatabaseConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
@property(readonly, nonatomic) EFSQLPropertyMapper *propertyMapper; // @synthesize propertyMapper=_propertyMapper;
@property(readonly, nonatomic) EFSQLSchema *protectedSchema; // @synthesize protectedSchema=_protectedSchema;
@property(readonly, nonatomic) EFSQLSchema *schema; // @synthesize schema=_schema;
- (id)urlForDatabasePath:(id)arg1 type:(long long)arg2;
- (id)urlForDatabasePath:(id)arg1 type:(long long)arg2 fileProtection:(id)arg3;
- (id)fileProtectionForDatabaseType:(long long)arg1;
- (void)scheduleRecurringActivity;
@property(readonly, nonatomic) _Bool enforceDataProtection;
- (void)reconcileJournalWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool databaseIsCorrupt;
- (id)openConnectionIsWriter:(_Bool)arg1;
- (void)checkInConnection:(id)arg1;
- (id)checkOutConnectionIsWriter:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isNestedDatabaseCall;
- (void)closeAllConnections;
- (_Bool)performBlock:(CDUnknownBlockType)arg1 isWriter:(_Bool)arg2 useTransaction:(_Bool)arg3;
- (_Bool)performDatabaseSetupUsingTransaction:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)performWriteBlock:(CDUnknownBlockType)arg1;
- (_Bool)performReadBlock:(CDUnknownBlockType)arg1;
- (void)performDatabaseWorkInBlockWithHighPriority:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool writersAreWaiting;
- (id)initWithBasePath:(id)arg1 databaseName:(id)arg2 maxConcurrentReaders:(unsigned long long)arg3 schema:(id)arg4 protectedSchema:(id)arg5 propertyMapper:(id)arg6 protectedDatabasePersistence:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

