#ifndef org_apache_lucene_analysis_WordlistLoader_H
#define org_apache_lucene_analysis_WordlistLoader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class Reader;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
        class CharArrayMap;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class WordlistLoader : public ::java::lang::Object {
         public:
          enum {
            mid_getSnowballWordSet_54423cfebc4b36d2,
            mid_getSnowballWordSet_7ccc50ae969b7582,
            mid_getStemDict_e4b1965d7f92b380,
            mid_getWordSet_54423cfebc4b36d2,
            mid_getWordSet_7ccc50ae969b7582,
            mid_getWordSet_fa00ae6680a30b94,
            mid_getWordSet_e6247d90d96b0c24,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WordlistLoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          WordlistLoader(const WordlistLoader& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::analysis::CharArraySet getSnowballWordSet(const ::java::io::Reader &);
          static ::org::apache::lucene::analysis::CharArraySet getSnowballWordSet(const ::java::io::Reader &, const ::org::apache::lucene::analysis::CharArraySet &);
          static ::org::apache::lucene::analysis::CharArrayMap getStemDict(const ::java::io::Reader &, const ::org::apache::lucene::analysis::CharArrayMap &);
          static ::org::apache::lucene::analysis::CharArraySet getWordSet(const ::java::io::Reader &);
          static ::org::apache::lucene::analysis::CharArraySet getWordSet(const ::java::io::Reader &, const ::org::apache::lucene::analysis::CharArraySet &);
          static ::org::apache::lucene::analysis::CharArraySet getWordSet(const ::java::io::Reader &, const ::java::lang::String &);
          static ::org::apache::lucene::analysis::CharArraySet getWordSet(const ::java::io::Reader &, const ::java::lang::String &, const ::org::apache::lucene::analysis::CharArraySet &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(WordlistLoader);
        extern PyTypeObject *PY_TYPE(WordlistLoader);

        class t_WordlistLoader {
        public:
          PyObject_HEAD
          WordlistLoader object;
          static PyObject *wrap_Object(const WordlistLoader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
