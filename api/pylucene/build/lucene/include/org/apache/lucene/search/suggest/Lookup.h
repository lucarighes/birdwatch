#ifndef org_apache_lucene_search_suggest_Lookup_H
#define org_apache_lucene_search_suggest_Lookup_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    class Set;
    class List;
  }
  namespace io {
    class InputStream;
    class OutputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          class InputIterator;
          class Lookup$LookupResult;
        }
        namespace spell {
          class Dictionary;
        }
        class BooleanQuery;
      }
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace store {
        class DataOutput;
        class DataInput;
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

          class Lookup : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_build_beb21a0bed34d1c1,
              mid_build_bf225d6cde09eeb7,
              mid_getCount_2e5ae9edcb9b072f,
              mid_load_174f501a36e0b663,
              mid_load_8d76187aa69e280c,
              mid_lookup_615e71ef0df182df,
              mid_lookup_b158b62b42de2509,
              mid_lookup_46ccd4df2ff3d83e,
              mid_store_185ae1aacccec26c,
              mid_store_a9f4986a27ef0adc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lookup(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lookup(const Lookup& obj) : ::java::lang::Object(obj) {}

            static ::java::util::Comparator *CHARSEQUENCE_COMPARATOR;

            Lookup();

            void build(const ::org::apache::lucene::search::spell::Dictionary &) const;
            void build(const ::org::apache::lucene::search::suggest::InputIterator &) const;
            jlong getCount() const;
            jboolean load(const ::java::io::InputStream &) const;
            jboolean load(const ::org::apache::lucene::store::DataInput &) const;
            ::java::util::List lookup(const ::java::lang::CharSequence &, jboolean, jint) const;
            ::java::util::List lookup(const ::java::lang::CharSequence &, const ::java::util::Set &, jboolean, jint) const;
            ::java::util::List lookup(const ::java::lang::CharSequence &, const ::org::apache::lucene::search::BooleanQuery &, jint, jboolean, jboolean) const;
            jboolean store(const ::java::io::OutputStream &) const;
            jboolean store(const ::org::apache::lucene::store::DataOutput &) const;
          };
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
          extern PyType_Def PY_TYPE_DEF(Lookup);
          extern PyTypeObject *PY_TYPE(Lookup);

          class t_Lookup {
          public:
            PyObject_HEAD
            Lookup object;
            static PyObject *wrap_Object(const Lookup&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
