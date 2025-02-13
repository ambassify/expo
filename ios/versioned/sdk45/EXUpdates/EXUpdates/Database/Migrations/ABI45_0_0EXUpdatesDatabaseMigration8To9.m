//  Copyright © 2021 650 Industries. All rights reserved.

#import <ABI45_0_0EXUpdates/ABI45_0_0EXUpdatesDatabaseMigration8To9.h>

NS_ASSUME_NONNULL_BEGIN

static NSString * const ABI45_0_0EXUpdatesDatabaseV8Filename = @"expo-v8.db";

@implementation ABI45_0_0EXUpdatesDatabaseMigration8To9

- (NSString *)filename
{
  return ABI45_0_0EXUpdatesDatabaseV8Filename;
}

- (BOOL)runMigrationOnDatabase:(struct sqlite3 *)db error:(NSError ** _Nullable)error
{
  // https://www.sqlite.org/lang_altertable.html#otheralter
  if (sqlite3_exec(db, @"ALTER TABLE \"assets\" ADD COLUMN \"expected_hash\" TEXT".UTF8String, NULL, NULL, NULL) != SQLITE_OK) return NO;
  return YES;
}

@end

NS_ASSUME_NONNULL_END
