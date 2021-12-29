#ifndef org_apache_lucene_search_suggest_analyzing_AnalyzingInfixSuggester_H
#define org_apache_lucene_search_suggest_analyzing_AnalyzingInfixSuggester_H

#include "org/apache/lucene/search/suggest/Lookup.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
    class List;
    class Set;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          class Lookup$LookupResult;
          class InputIterator;
        }
        class BooleanQuery;
        class BooleanClause$Occur;
        class BooleanQuery$Builder;
      }
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace store {
        class DataInput;
        class Directory;
        class DataOutput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {

            class AnalyzingInfixSuggester : public ::org::apache::lucene::search::suggest::Lookup {
             public:
              enum {
                mid_init$_b06573e2fea5d93f,
                mid_init$_c56c3a5359ce7e82,
                mid_init$_3977d9b2ec27297d,
                mid_init$_56c4c7125e457877,
                mid_add_86cc3152c266aae0,
                mid_addContextToQuery_a9cadb6fb6c91941,
                mid_build_bf225d6cde09eeb7,
                mid_close_f2cc1bce94666404,
                mid_commit_f2cc1bce94666404,
                mid_getChildResources_d4dfbf7a26ff41df,
                mid_getCount_2e5ae9edcb9b072f,
                mid_load_8d76187aa69e280c,
                mid_lookup_2a2afc7b868a29c5,
                mid_lookup_b158b62b42de2509,
                mid_lookup_46ccd4df2ff3d83e,
                mid_lookup_e54afc1bb977fe8b,
                mid_lookup_7723ef64fb9167ab,
                mid_ramBytesUsed_2e5ae9edcb9b072f,
                mid_refresh_f2cc1bce94666404,
                mid_store_a9f4986a27ef0adc,
                mid_update_86cc3152c266aae0,
                mid_getDirectory_3bbac5ac7f2b55df,
                mid_highlight_1af0ad6555ec6446,
                mid_getTextFieldType_cc3ee11125b99c9b,
                mid_createResults_8928817123803a4e,
                mid_getIndexWriterConfig_bfd633e4628d99e0,
                mid_getLastTokenQuery_1cf26fcf5e3c5839,
                mid_finishQuery_67dd0f542e9bcd1f,
                mid_addNonMatch_676b08686d015750,
                mid_addWholeMatch_0fe8b914bb412351,
                mid_addPrefixMatch_63435e12e234e384,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AnalyzingInfixSuggester(jobject obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AnalyzingInfixSuggester(const AnalyzingInfixSuggester& obj) : ::org::apache::lucene::search::suggest::Lookup(obj) {}

              static jboolean DEFAULT_ALL_TERMS_REQUIRED;
              static jboolean DEFAULT_HIGHLIGHT;
              static jint DEFAULT_MIN_PREFIX_CHARS;

              AnalyzingInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &);
              AnalyzingInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jboolean);
              AnalyzingInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jboolean, jboolean, jboolean);
              AnalyzingInfixSuggester(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::Analyzer &, jint, jboolean, jboolean, jboolean, jboolean);

              void add(const ::org::apache::lucene::util::BytesRef &, const ::java::util::Set &, jlong, const ::org::apache::lucene::util::BytesRef &) const;
              void addContextToQuery(const ::org::apache::lucene::search::BooleanQuery$Builder &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::search::BooleanClause$Occur &) const;
              void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
              void close() const;
              void commit() const;
              ::java::util::Collection getChildResources() const;
              jlong getCount() const;
              jboolean load(const ::org::apache::lucene::store::DataInput &) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::org::apache::lucene::search::BooleanQuery &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Map &, jint, jboolean, jboolean) const;
              ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jint, jboolean, jboolean) const;
              jlong ramBytesUsed() const;
              void refresh() const;
              jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
              void update(const ::org::apache::lucene::util::BytesRef &, const ::java::util::Set &, jlong, const ::org::apache::lucene::util::BytesRef &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {
            extern PyType_Def PY_TYPE_DEF(AnalyzingInfixSuggester);
            extern PyTypeObject *PY_TYPE(AnalyzingInfixSuggester);

            class t_AnalyzingInfixSuggester {
            public:
              PyObject_HEAD
              AnalyzingInfixSuggester object;
              static PyObject *wrap_Object(const AnalyzingInfixSuggester&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
